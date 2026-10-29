__int64 __fastcall sub_28B80(__int64 a1, __int64 *a2, unsigned __int64 *a3, __int64 *a4)
{
  __int64 v5; // r14
  char *v7; // rax
  unsigned __int64 v8; // rax
  unsigned int v9; // edx
  __int16 v11; // ax
  __int64 v12; // [rsp+10h] [rbp-1C0h] BYREF
  __int64 v13; // [rsp+18h] [rbp-1B8h] BYREF
  __int128 v14; // [rsp+20h] [rbp-1B0h] BYREF
  __int64 v15; // [rsp+30h] [rbp-1A0h]
  __int64 v16; // [rsp+38h] [rbp-198h]
  __int64 v17; // [rsp+40h] [rbp-190h]
  _BYTE v18[6]; // [rsp+48h] [rbp-188h] BYREF
  __int16 v19; // [rsp+4Eh] [rbp-182h]
  char v20; // [rsp+188h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+190h] [rbp-40h]

  v5 = *a2;
  v21 = __readfsqword(0x28u);
  v13 = a1;
  v7 = v18;
  v15 = -1;
  v16 = 0;
  v17 = 0;
  v14 = -1;
  do
  {
    *(_WORD *)v7 = 0;
    v7 += 40;
    *((_WORD *)v7 - 19) = 0;
    *((_WORD *)v7 - 18) = 0;
    *((_DWORD *)v7 - 2) = 0;
    *((_WORD *)v7 - 17) = 0;
    *((_OWORD *)v7 - 2) = 0;
    *((_QWORD *)v7 - 2) = 0;
  }
  while ( &v20 != v7 );
  v20 = 1;
  if ( v5 + 24 >= (unsigned __int64)a2[1] )
  {
    decode_insn();
    if ( (unsigned __int8)sub_28780(a1, a3, &v12, (__int64)&v14) )
      a2[1] = v5 + v12;
    v8 = *a3;
    if ( *a3 != -1 || (v8 = sub_267A0(a1, v5), *a3 = v8, v8 != -1) )
    {
      v9 = 1;
      goto LABEL_5;
    }
    if ( (unsigned int)sub_269F0((__int64)&v13, 0, a3, a4, &v12) )
      a2[1] = v5 + v12;
  }
  v8 = *a3;
  v9 = 1;
  if ( *a3 != -1 )
  {
LABEL_5:
    *a3 = v8 & 0xFFFFFFFFFFFFFFFELL;
    return v9;
  }
  if ( *a4 == -1 )
  {
    v9 = 0;
    if ( *((char *)a2 + 16) >= 0 )
    {
      decode_insn();
      v11 = v16;
      if ( (_WORD)v16 == 910 )
      {
        if ( (v19 & 0xFFFD) != 1 )
          goto LABEL_13;
        decode_insn();
        v11 = v16;
      }
      if ( (v11 == 41 || v11 == 470) && v18[1] == 1 && v19 != 14 )
      {
        a2[2] |= 0x80uLL;
        update_func();
        v9 = 1;
LABEL_14:
        v8 = *a3;
        if ( *a3 == -1 )
          return v9;
        goto LABEL_5;
      }
LABEL_13:
      v9 = 0;
      goto LABEL_14;
    }
  }
  return v9;
}
