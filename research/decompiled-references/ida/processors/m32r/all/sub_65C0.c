__int64 __fastcall sub_65C0(
        __int64 *a1,
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
        char a44)
{
  __int64 v44; // rbp
  __int64 *v45; // rbx
  char *v46; // rdx
  char *v47; // rax
  __int16 v49; // ax
  int v50; // ebx
  __int64 v51; // [rsp+0h] [rbp-5D8h] BYREF
  _QWORD v52[2]; // [rsp+18h] [rbp-5C0h]
  _QWORD v53[5]; // [rsp+2Eh] [rbp-5AAh]
  __int16 v54; // [rsp+56h] [rbp-582h]
  char v55; // [rsp+70h] [rbp-568h]
  char v56; // [rsp+168h] [rbp-470h] BYREF
  __int16 v57; // [rsp+180h] [rbp-458h]
  __int16 v58; // [rsp+196h] [rbp-442h]
  __int16 v59; // [rsp+1BEh] [rbp-41Ah]
  char v60; // [rsp+1D8h] [rbp-400h]
  __int16 v61; // [rsp+2E8h] [rbp-2F0h]
  _QWORD v62[7]; // [rsp+5A0h] [rbp-38h] BYREF

  v62[1] = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  v44 = *a1;
  v45 = &v51;
  v46 = &v56;
  do
  {
    *((_QWORD *)v46 - 43) = -1;
    v47 = v46 - 320;
    *((_DWORD *)v46 - 84) = 0;
    *((_DWORD *)v46 - 83) = 0;
    *((_WORD *)v46 - 164) = 0;
    *((_WORD *)v46 - 163) = 0;
    *(_OWORD *)(v46 - 360) = -1;
    do
    {
      *(_WORD *)v47 = 0;
      v47 += 40;
      *((_WORD *)v47 - 19) = 0;
      *((_WORD *)v47 - 18) = 0;
      *((_DWORD *)v47 - 2) = 0;
      *((_WORD *)v47 - 17) = 0;
      *((_OWORD *)v47 - 2) = 0;
      *((_QWORD *)v47 - 2) = 0;
    }
    while ( v46 != v47 );
    v46 += 360;
  }
  while ( v46 != &a44 );
  do
  {
    v45 += 45;
    decode_insn();
    v44 += *((unsigned __int16 *)v45 - 167);
  }
  while ( v62 != v45 );
  if ( LOWORD(v52[0]) == 59 )
  {
    if ( LOWORD(v53[0]) != 13 )
      return 0;
  }
  else if ( LOWORD(v52[0]) != 76 || LOWORD(v53[0]) != 13 || v54 != 15 || v55 != 3 )
  {
    return 0;
  }
  v49 = v57;
  if ( v57 == 59 )
  {
    if ( v58 != 14 )
      return 0;
  }
  else
  {
    v50 = 1;
    if ( v57 != 76 )
      goto LABEL_14;
    if ( v58 != 13 || v59 != 14 || v60 == 3 )
      return 0;
  }
  v49 = v61;
  v50 = 2;
LABEL_14:
  if ( v49 != 3 || LOWORD(v53[45 * v50]) != 15 )
    return 0;
  get_flags_ex();
  if ( !(unsigned __int8)is_invsign() )
    toggle_sign();
  if ( LOWORD(v52[45 * v50 + 45]) != 46 || LOWORD(v53[45 * v50 + 45]) != 13 || *(&v54 + 180 * v50 + 180) != 15 )
    return 0;
  a1[2] |= 0x110uLL;
  return add_frame();
}

