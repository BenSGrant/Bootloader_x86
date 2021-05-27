
void main() {
    /*
     create a pointer to a character and point it to 
     the first text cell of video memory (top left of the screen)
    */
   char* video_memory = (char*) 0xb8000;
   /*
    at the address pointed to by the video_memory variable, store
    the character 'X'
   */
   *video_memory = 'X';
}