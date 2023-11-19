//
// Created by Jacob Yeung on 11/12/23.
//

template<class elemType>
int seqOrdSearch(const elemType list[], int length, const elemType& item)
{
    for(int i = 0; i < length; ++i){ // Write the function definition here
        if(list[i] == item){
            return i;
        }
    }

    return -1; // return -1 if item not found
} //end seqOrdSearch


//#ifndef CS216PROGRAMMINGEXERCISE1803_SEARCHSORTALGORITHMS_H
//#define CS216PROGRAMMINGEXERCISE1803_SEARCHSORTALGORITHMS_H
//
//#endif //CS216PROGRAMMINGEXERCISE1803_SEARCHSORTALGORITHMS_H
