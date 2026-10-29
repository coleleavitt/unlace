__int64 __fastcall sub_4700(unsigned __int64 *a1)
{
  unsigned __int64 *v1; // rax
  unsigned __int64 that; // rbx
  __int16 v3; // ax
  __int64 v4; // rbp
  __int64 func; // rax
  __int128 v7; // [rsp+0h] [rbp-198h] BYREF
  __int64 v8; // [rsp+10h] [rbp-188h]
  __int64 v9; // [rsp+18h] [rbp-180h]
  __int64 v10; // [rsp+20h] [rbp-178h]
  _BYTE v11[8]; // [rsp+28h] [rbp-170h] BYREF
  __int64 v12; // [rsp+30h] [rbp-168h]
  unsigned __int64 v13; // [rsp+168h] [rbp-30h] BYREF

  v13 = __readfsqword(0x28u);
  v7 = -1;
  v8 = -1;
  v1 = (unsigned __int64 *)v11;
  v9 = 0;
  v10 = 0;
  that = *a1;
  do
  {
    *(_WORD *)v1 = 0;
    v1 += 5;
    *((_WORD *)v1 - 19) = 0;
    *((_WORD *)v1 - 18) = 0;
    *((_DWORD *)v1 - 2) = 0;
    *((_WORD *)v1 - 17) = 0;
    *((_OWORD *)v1 - 2) = 0;
    *(v1 - 2) = 0;
  }
  while ( &v13 != v1 );
  if ( that >= a1[1] )
  {
LABEL_9:
    v3 = v9;
    v4 = 0;
LABEL_10:
    if ( (unsigned __int16)(v3 - 65) <= 1u )
    {
      ((void (__fastcall *)(__int128 *, _BYTE *, double))sub_5740)(&v7, v11, 0.0);
      func = get_func();
      if ( func )
        return *(_QWORD *)(func + 48);
    }
    return v4;
  }
  while ( 1 )
  {
    decode_insn();
    v3 = v9;
    if ( (unsigned __int16)(v9 - 72) <= 1u )
      break;
    that = next_that();
    if ( that >= a1[1] )
      goto LABEL_9;
  }
  v4 = v12;
  if ( that >= a1[1] )
    goto LABEL_10;
  return v4;
}

