unsigned __int64 __fastcall sub_20AC0(__int64 a1, __int64 a2, int a3, __int64 a4, char a5)
{
  int v6; // r15d
  __int64 v7; // rax
  int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 func; // rax
  __int64 *v12; // rbx
  char *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // [rsp+10h] [rbp-1F8h]
  __int64 v20; // [rsp+20h] [rbp-1E8h] BYREF
  __int128 v21; // [rsp+28h] [rbp-1E0h]
  __int64 v22; // [rsp+40h] [rbp-1C8h] BYREF
  __int128 v23; // [rsp+48h] [rbp-1C0h]
  __int128 v24; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v25; // [rsp+70h] [rbp-198h]
  __int64 v26; // [rsp+78h] [rbp-190h]
  __int64 v27; // [rsp+80h] [rbp-188h]
  char v28; // [rsp+88h] [rbp-180h] BYREF
  _QWORD v29[8]; // [rsp+1C8h] [rbp-40h] BYREF

  v29[0] = __readfsqword(0x28u);
  v21 = 0;
  v20 = 0;
  sub_1A920(&v20, a2);
  v6 = 0;
  v7 = 0;
  if ( (_QWORD)v21 )
  {
    while ( 1 )
    {
      v23 = 0;
      v22 = 0;
      v17 = 8 * v7;
      sub_110D0(nullptr, nullptr, &v22, *(_QWORD *)(v20 + 8 * v7), 12);
      if ( !(_QWORD)v23 )
        break;
      v8 = 0;
      v9 = 0;
      do
      {
        v10 = *(_QWORD *)(v22 + 8 * v9);
        func = get_func(v10);
        v12 = (__int64 *)func;
        if ( func && (a4 == -1 || (int)get_func_chunknum(func, a4) >= 0) )
        {
          if ( (unsigned __int8)sub_1F560(a1, v12, 0) )
          {
            v13 = &v28;
            v25 = -1;
            v26 = 0;
            v27 = 0;
            v24 = -1;
            do
            {
              *(_WORD *)v13 = 0;
              v13 += 40;
              *((_WORD *)v13 - 19) = 0;
              *((_WORD *)v13 - 18) = 0;
              *((_DWORD *)v13 - 2) = 0;
              *((_WORD *)v13 - 17) = 0;
              *((_OWORD *)v13 - 2) = 0;
              *((_QWORD *)v13 - 2) = 0;
            }
            while ( v29 != (_QWORD *)v13 );
            if ( (int)decode_insn(&v24, v10, v29, 0.0) > 0 && sub_15B40((__int64)&v24) && *v12 != v10 )
            {
              v14 = decode_prev_insn(&v24, v10);
              if ( v14 != -1 && *v12 != v14 && sub_15B40((__int64)&v24) )
              {
                v15 = sub_15B70(a1, (__int64)&v24, 0);
                sub_20300(a1, v15, v12, *(_QWORD *)(v20 + v17), a3 == 4, a5);
              }
            }
          }
        }
        v9 = ++v8;
      }
      while ( v8 < (unsigned __int64)v23 );
      if ( v22 )
      {
        *(_QWORD *)&v23 = 0;
        ++v6;
        qfree(v22);
        v7 = v6;
        if ( v6 >= (unsigned __int64)v21 )
          goto LABEL_24;
      }
      else
      {
LABEL_5:
        v7 = ++v6;
        if ( v6 >= (unsigned __int64)v21 )
          goto LABEL_24;
      }
    }
    if ( v22 )
      qfree(v22);
    goto LABEL_5;
  }
LABEL_24:
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20);
  }
  return v29[0] - __readfsqword(0x28u);
}

