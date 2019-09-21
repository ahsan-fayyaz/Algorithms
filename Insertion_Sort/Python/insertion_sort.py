#what's your array?

def insert_sort(array, n):
    num = 1
    for j in range(1, n):
        key = array[j]
        i = j - 1
        while (i>=0 and array[i]>key):
            # print('now running for element ' + str(num))
            array[i+1] = array[i]
            i-=1
            #print(array)
        #print('\n')
        array[i+1] = key

        num += 1
    return array

list = [7,10,2,3,5,11,1]
# print(list)
n = len(list)

new_list = insert_sort(list, n)
print(new_list)
