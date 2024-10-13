# cellular automation
# rule 90 or 01011010
# author: Bartłomiej Dylewski

# create initial state
def create_initial_state(size):
    state = [0] * size # create list of zeros with size elements
    center_index = size // 2 # find center index
    state[center_index] = 1 # set center index to 1
    return state # return list of zeros with 1 in the center
    
# XOR gate, if we have only one neighbour living, return 1
def rule90(left, center, right):
    return left ^ right

def update_state(state):
    new_state = []
    size = len(state)
    
    # identify center and neighbours, and apply rule90
    # for every cell in the state
    # if cell is on the edge, neighbout is set to 0
    for i in range(size):
        left = state[i-1] if i > 0 else 0
        center = state[i]
        right = state[i+1] if i < size - 1 else 0
        
        new_cell_state = rule90(left, center, right)
        new_state.append(new_cell_state)
    
    return new_state

# print state as a string, 'o' for 1 and ' ' for 0
def print_state(state):
    print("".join(['o' if cell == 1 else ' ' for cell in state]))

# set size and steps, and run the sinulation
def main():
    size = 81 # size of automation
    steps = 40 # number of steps to print out
    state = create_initial_state(size) # create first state
    
    # print state then update for every step
    for i in range(steps):
        print_state(state)
        state = update_state(state)

# run main function
if __name__ == "__main__":
    main()