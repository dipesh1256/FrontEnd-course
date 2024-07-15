//================ Javascript String Method ============ //

// String As Object

// const Str = new String('This is String Object!')  

// console.log(Str);


//======= String Length Method ======= //

// const Str1 = "This is S tring Length  Method!"
//          //   1234567890123456789012345678901

// console.log(Str1.length);


//=========== String Prototypes / Method =========== //

// String at Method

// at(index)

// {
//     let Str = "This is String At Method!"
//                0123456789012345678901234 // index
//                1234567890123456789012345 // length

//     console.log(Str.at(10));
//     console.log(Str.at(-6));
// }

// String CharAt Method 

// chatAt(index)

// {
//     let Str = "This is String CharAt Method!"
//                012345678901234567890

//     console.log(Str.charAt(15));
//     console.log(Str.charAt(20));
//     console.log(Str.charAt(-5));
// }

// String charCodeAt Method 

// charCodeAt(index)

{
    // let  Str = "This is CharCodeAt Method!"
    //             01234567890

    // console.log(Str.charCodeAt(9));


//     ASCII Table
// Dec  = Decimal Value
// Char = Character

// '5' has the int value 53
// if we write '5'-'0' it evaluates to 53-48, or the int 5
// if we write char c = 'B'+32; then c stores 'b'


// Dec  Char                           Dec  Char     Dec  Char     Dec  Char
// ---------                           ---------     ---------     ----------
//   0  NUL (null)                      32  SPACE     64  @         96  `
//   1  SOH (start of heading)          33  !         65  A         97  a
//   2  STX (start of text)             34  "         66  B         98  b
//   3  ETX (end of text)               35  #         67  C         99  c
//   4  EOT (end of transmission)       36  $         68  D        100  d
//   5  ENQ (enquiry)                   37  %         69  E        101  e
//   6  ACK (acknowledge)               38  &         70  F        102  f
//   7  BEL (bell)                      39  '         71  G        103  g
//   8  BS  (backspace)                 40  (         72  H        104  h
//   9  TAB (horizontal tab)            41  )         73  I        105  i
//  10  LF  (NL line feed, new line)    42  *         74  J        106  j
//  11  VT  (vertical tab)              43  +         75  K        107  k
//  12  FF  (NP form feed, new page)    44  ,         76  L        108  l
//  13  CR  (carriage return)           45  -         77  M        109  m
//  14  SO  (shift out)                 46  .         78  N        110  n
//  15  SI  (shift in)                  47  /         79  O        111  o
//  16  DLE (data link escape)          48  0         80  P        112  p
//  17  DC1 (device control 1)          49  1         81  Q        113  q
//  18  DC2 (device control 2)          50  2         82  R        114  r
//  19  DC3 (device control 3)          51  3         83  S        115  s
//  20  DC4 (device control 4)          52  4         84  T        116  t
//  21  NAK (negative acknowledge)      53  5         85  U        117  u
//  22  SYN (synchronous idle)          54  6         86  V        118  v
//  23  ETB (end of trans. block)       55  7         87  W        119  w
//  24  CAN (cancel)                    56  8         88  X        120  x
//  25  EM  (end of medium)             57  9         89  Y        121  y
//  26  SUB (substitute)                58  :         90  Z        122  z
//  27  ESC (escape)                    59  ;         91  [        123  {
//  28  FS  (file separator)            60  <         92  \        124  |
//  29  GS  (group separator)           61  =         93  ]        125  }
//  30  RS  (record separator)          62  >         94  ^        126  ~
//  31  US  (unit separator)            63  ?         95  _        127  DEL
    
}

//========= String Concat Method ============ //

// concat()
// concat(str1 , str2)
// concat(str1 , str2 , .........)

// {
//     let Str1 = "This is First String!"
//     let Str2 = "This is Second String!"
//     let Str3 = "This is Third String!"

//     console.log(Str1 + Str2);

//     console.log(Str3.concat(Str1 , Str2));
// }

//========== String includes Method ========= //

// includes(searchString)
// includes(searchString , position)

{
    let Str1 = "I am playing before and I am not playing after why I am not Playing after!"
                12345678901234567890123456789012345678901234567890
    
    console.log(Str1.includes('I'));
    console.log(Str1.includes('i'));
    console.log(Str1.includes('Am'));
    console.log(Str1.includes('am'));
    console.log(Str1.includes('before'));
    console.log(Str1.includes('after'));
    console.log(Str1.includes('before' , 13));
    console.log(Str1.includes('after' , 43));

}





