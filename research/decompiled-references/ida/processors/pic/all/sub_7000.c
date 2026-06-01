__int64 __fastcall sub_7000(
        __int64 a1,
        __int64 *a2,
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
        char a44)
{
  __int64 v45; // r13
  _QWORD *v46; // rbp
  char *v47; // rdx
  char *v48; // rax
  int v49; // eax
  _WORD v50[28]; // [rsp+0h] [rbp-5D8h] BYREF
  __int64 v51; // [rsp+38h] [rbp-5A0h]
  __int64 v52; // [rsp+60h] [rbp-578h]
  char v53; // [rsp+168h] [rbp-470h] BYREF
  __int16 v54; // [rsp+180h] [rbp-458h]
  __int64 v55; // [rsp+1A0h] [rbp-438h]
  __int64 v56; // [rsp+1C8h] [rbp-410h]
  __int16 v57; // [rsp+2E8h] [rbp-2F0h]
  __int16 v58; // [rsp+450h] [rbp-188h]
  __int64 v59; // [rsp+470h] [rbp-168h]
  __int16 v60; // [rsp+48Eh] [rbp-14Ah]
  _QWORD v61[7]; // [rsp+5A0h] [rbp-38h] BYREF

  v61[1] = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  if ( a2[3] != -1 )
    return 0;
  v45 = *a2;
  if ( *a2 + 12 >= (unsigned __int64)a2[1] )
    return 0;
  v46 = v50;
  v47 = &v53;
  do
  {
    *((_QWORD *)v47 - 43) = -1;
    v48 = v47 - 320;
    *((_DWORD *)v47 - 84) = 0;
    *((_DWORD *)v47 - 83) = 0;
    *((_WORD *)v47 - 164) = 0;
    *((_WORD *)v47 - 163) = 0;
    *(_OWORD *)(v47 - 360) = -1;
    do
    {
      *(_WORD *)v48 = 0;
      v48 += 40;
      *((_WORD *)v48 - 19) = 0;
      *((_WORD *)v48 - 18) = 0;
      *((_DWORD *)v48 - 2) = 0;
      *((_WORD *)v48 - 17) = 0;
      *((_OWORD *)v48 - 2) = 0;
      *((_QWORD *)v48 - 2) = 0;
    }
    while ( v47 != v48 );
    v47 += 360;
  }
  while ( v47 != &a44 );
  do
  {
    v49 = decode_insn();
    if ( v49 < 0 )
      v49 = 0;
    v46 += 45;
    v45 += v49;
  }
  while ( v61 != v46 );
  if ( v50[12] != 79
    || v51 != 4057
    || v52 != 4070
    || v54 != 79
    || v55 != 4065
    || v56 != 4057
    || v57 != 29
    || v58 != 63
    || v59 != 4065
    || v60 != 1 )
  {
    return 0;
  }
  a2[2] |= 0x10uLL;
  return add_frame();
}

