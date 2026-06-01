unsigned __int64 __fastcall sub_20800(__int64 a1, __int64 a2, char a3, __int64 a4, char a5)
{
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 func; // rax
  __int64 *v11; // r15
  unsigned __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  int v16; // [rsp+0h] [rbp-204h]
  __int64 v17; // [rsp+4h] [rbp-200h]
  __int64 v20; // [rsp+1Ch] [rbp-1E8h] BYREF
  __int128 v21; // [rsp+24h] [rbp-1E0h]
  __int64 v22; // [rsp+3Ch] [rbp-1C8h] BYREF
  __int128 v23; // [rsp+44h] [rbp-1C0h]
  __int128 v24; // [rsp+5Ch] [rbp-1A8h] BYREF
  __int64 v25; // [rsp+6Ch] [rbp-198h]
  __int64 v26; // [rsp+74h] [rbp-190h]
  __int64 v27; // [rsp+7Ch] [rbp-188h]
  char v28; // [rsp+84h] [rbp-180h] BYREF
  unsigned __int64 v29; // [rsp+1C4h] [rbp-40h] BYREF

  v29 = __readfsqword(0x28u);
  v21 = 0;
  v20 = 0;
  sub_1A920(&v20, a2);
  if ( (_QWORD)v21 )
  {
    v16 = 0;
    v6 = 0;
    do
    {
      v23 = 0;
      v22 = 0;
      v17 = 8 * v6;
      sub_110D0(&v22, nullptr, nullptr, *(_QWORD *)(v20 + 8 * v6), 10);
      if ( (_QWORD)v23 )
      {
        v7 = 0;
        v8 = 0;
        do
        {
          v9 = *(_QWORD *)(v22 + 8 * v8);
          func = get_func(v9);
          v11 = (__int64 *)func;
          if ( func && (a4 == -1 || (int)get_func_chunknum(func, a4) >= 0) && *v11 != v9 )
          {
            if ( (unsigned __int8)sub_1F560(a1, v11, 0) )
            {
              v12 = (unsigned __int64 *)&v28;
              v25 = -1;
              v26 = 0;
              v27 = 0;
              v24 = -1;
              do
              {
                *(_WORD *)v12 = 0;
                v12 += 5;
                *((_WORD *)v12 - 19) = 0;
                *((_WORD *)v12 - 18) = 0;
                *((_DWORD *)v12 - 2) = 0;
                *((_WORD *)v12 - 17) = 0;
                *((_OWORD *)v12 - 2) = 0;
                *(v12 - 2) = 0;
              }
              while ( &v29 != v12 );
              v13 = decode_prev_insn(&v24, v9);
              if ( v13 != -1 && *v11 != v13 && sub_15B40((__int64)&v24) )
              {
                v14 = sub_15B70(a1, (__int64)&v24, 0);
                sub_20300(a1, v14, v11, *(_QWORD *)(v20 + v17), a3, a5);
              }
            }
          }
          v8 = ++v7;
        }
        while ( v7 < (unsigned __int64)v23 );
      }
      if ( v22 )
      {
        *(_QWORD *)&v23 = 0;
        qfree(v22);
      }
      v6 = ++v16;
    }
    while ( v16 < (unsigned __int64)v21 );
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20);
  }
  return v29 - __readfsqword(0x28u);
}
