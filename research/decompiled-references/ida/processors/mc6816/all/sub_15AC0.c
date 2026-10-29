__int64 __fastcall sub_15AC0(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        char a45)
{
  unsigned __int64 v46; // rbp
  unsigned __int64 *v47; // r12
  char *v48; // rdx
  char *v49; // rax
  unsigned __int64 v50; // rdx
  int v51; // eax
  int v52; // ecx
  char v53; // si
  _WORD v54[20]; // [rsp+0h] [rbp-468h] BYREF
  char v55; // [rsp+29h] [rbp-43Fh]
  unsigned __int64 v56; // [rsp+30h] [rbp-438h]
  char v57; // [rsp+168h] [rbp-300h] BYREF
  __int16 v58; // [rsp+180h] [rbp-2E8h]
  char v59; // [rsp+191h] [rbp-2D7h]
  __int16 v60; // [rsp+2E8h] [rbp-180h]
  unsigned __int64 v61; // [rsp+438h] [rbp-30h] BYREF

  v61 = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( a1[3] == -1 )
    {
      v46 = *a1;
      if ( *a1 + 6 < a1[1] )
      {
        v47 = (unsigned __int64 *)v54;
        v48 = &v57;
        do
        {
          *((_QWORD *)v48 - 43) = -1;
          v49 = v48 - 320;
          *((_DWORD *)v48 - 84) = 0;
          *((_DWORD *)v48 - 83) = 0;
          *((_WORD *)v48 - 164) = 0;
          *((_WORD *)v48 - 163) = 0;
          *(_OWORD *)(v48 - 360) = -1;
          do
          {
            *(_WORD *)v49 = 0;
            v49 += 40;
            *((_WORD *)v49 - 19) = 0;
            *((_WORD *)v49 - 18) = 0;
            *((_DWORD *)v49 - 2) = 0;
            *((_WORD *)v49 - 17) = 0;
            *((_OWORD *)v49 - 2) = 0;
            *((_QWORD *)v49 - 2) = 0;
          }
          while ( v48 != v49 );
          v48 += 360;
        }
        while ( v48 != &a45 );
        while ( 1 )
        {
          decode_insn();
          v46 += *((unsigned __int16 *)v47 + 13);
          if ( v46 >= a1[1] )
            break;
          v47 += 45;
          if ( &v61 == v47 )
          {
            if ( v54[12] != 232 )
              return 0;
            if ( v58 == 226 )
            {
              if ( v59 != 5 || v60 != 198 )
                return 0;
            }
            else if ( v58 != 198 )
            {
              return 0;
            }
            a1[2] |= 0x110u;
            if ( v55 == 8 )
            {
              v50 = v56;
              v51 = 7;
              v52 = 0;
              do
              {
                v53 = v50;
                v50 >>= 1;
                v52 += v53 & 1;
                --v51;
              }
              while ( v51 );
            }
            return add_frame();
          }
        }
      }
    }
  }
  return 0;
}

