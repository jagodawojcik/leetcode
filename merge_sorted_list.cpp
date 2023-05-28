#include<iostream>
#include<vector>
using namespace std;


 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(list2 == NULL){return list1;}
        if(list1 == NULL){return list2;}
        

        ListNode* sorted_list;
        ListNode* head;

        if(list1->val <= list2->val){
            head = list1;
            sorted_list = list1;
            list1 = list1->next;
        }
        else if(list1->val > list2->val){
            head=list2;
            sorted_list =list2;
            list2 = list2->next;
        }

        while(list1 != NULL and list2!= NULL){
        if(list1->val <= list2->val){
            sorted_list->next = list1;
            sorted_list = sorted_list->next;
            list1 = list1->next;
        }
        else if(list1->val > list2->val){
            sorted_list->next = list2;
            sorted_list = sorted_list->next;
            list2 = list2->next;
        }
        }

        if(list1 == NULL){
            sorted_list->next = list2;
        }
        else if(list2 == NULL){
            sorted_list->next = list1;
        }

        return head;


        }

    };



    int main(){

        //ListNode list1(1, ListNode(2, new ListNode(4)));
        ListNode* list1 = new ListNode(1, new ListNode(2, new ListNode(4)));
        ListNode* list2 = new ListNode(1, new ListNode(3, new ListNode(4)));

        Solution sol;
        ListNode* result = sol.mergeTwoLists(list1, list2);


        return 0;
    }