Part 1 ) 
  What I worked on : 
    - set up the project folder and opened the starter files.
    - reviewed instructions for the tree and node classes.
    - looked over the main.cpp and tree.
  Issues :
     - No bugs yet 
  
  How I Attempted To Fix Issues : 
      - N/A 

  Part 2 ) 
  What I worked on : 
    - Implemented The Node constructor
    - Added basic structure for the Tree constructor 

  Issues : 
     - Unsure how to manage dynamic memory safely with children pointers. 
 
  How I attempeted To fix issues : 
    - Looked at examples of trees using pointers.

  Part 3 ) 
    What I worked on : 
      - Finished addNode() and connected children to parents.
    Issues : 
      - findNode() wasn’t returning the correct node.
      - addNode() originally created duplicate roots by mistake.
     
   How I attempted to fix Issue : 
      - Added print statements to track the search.
      - Fixed logic so only non-null parent gets children added.

   Part 4 ) 
    What I worked on : 
      - Added destructor to free memory.
      - Verified that no memory leaks occur using dynamic deletion.
   
  Issues : 
      - Some child nodes were deleted twice.

   How I attempted to Fix Issues: 
      - Ensured each node is deleted only once by using a post-order cleanup.

  Part 5 ) Final Part 
    What I worked on : 
      - Cleaned comments, final testing, and touched up main.cpp.

  Issues : 
      - None at this stage. 
    
  Files Modified : 
    - Tree.h 
    - Main.cpp
  
