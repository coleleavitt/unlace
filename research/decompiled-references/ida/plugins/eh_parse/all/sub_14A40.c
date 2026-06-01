__int64 __fastcall sub_14A40(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rbx
  __int64 func; // rax
  __int64 result; // rax
  unsigned __int64 *v9; // rbp
  unsigned __int64 *v10; // rax
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int128 v14; // [rsp+0h] [rbp-1A8h] BYREF
  unsigned __int64 v15; // [rsp+10h] [rbp-198h]
  __int64 v16; // [rsp+18h] [rbp-190h]
  __int64 v17; // [rsp+20h] [rbp-188h]
  char v18; // [rsp+28h] [rbp-180h] BYREF
  char v19; // [rsp+29h] [rbp-17Fh]
  __int16 v20; // [rsp+2Eh] [rbp-17Ah]
  __int64 v21; // [rsp+50h] [rbp-158h] BYREF
  __int64 v22; // [rsp+58h] [rbp-150h]
  char v23; // [rsp+70h] [rbp-138h]
  unsigned __int64 v24; // [rsp+168h] [rbp-40h] BYREF

  v5 = a3;
  v24 = __readfsqword(0x28u);
  func = get_func(a3);
  if ( func && *(_BYTE *)(a2 + 1) == 1 )
  {
    v15 = -1;
    v9 = (unsigned __int64 *)func;
    v16 = 0;
    v10 = (unsigned __int64 *)&v18;
    v17 = 0;
    v14 = -1;
    do
    {
      *(_WORD *)v10 = 0;
      v10 += 5;
      *((_WORD *)v10 - 19) = 0;
      *((_WORD *)v10 - 18) = 0;
      *((_DWORD *)v10 - 2) = 0;
      *((_WORD *)v10 - 17) = 0;
      *((_OWORD *)v10 - 2) = 0;
      *(v10 - 2) = 0;
    }
    while ( &v24 != v10 );
    do
    {
      if ( decode_prev_insn(&v14, v5) == -1 )
        break;
      v5 = v15;
      if ( v15 < *v9 || v9[1] < v15 )
        break;
      v11 = *(unsigned __int16 *)(a2 + 6);
      if ( (_WORD)v16 == 122 )
      {
        if ( v19 == 1 && v20 == (_WORD)v11 && BYTE1(v21) == 5 )
        {
          result = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
          v12 = v22 + 16 * v14;
          if ( v12 != result )
          {
            if ( v12 == -1 )
              return -1;
            else
              return v12 & result;
          }
          return result;
        }
      }
      else if ( (unsigned __int16)v16 <= 0x7Au )
      {
        if ( (_WORD)v16 == 44 )
        {
          if ( v19 == 1 && v20 == (_WORD)v11 )
          {
            v13 = sub_14A40(a1, a2, v15, a4, 0.0);
            return (a4 != v13) + v13;
          }
        }
        else if ( (_WORD)v16 == 92 )
        {
          if ( v19 == 1 && v20 == (_WORD)v11 && !v23 )
            return sub_14940(a1, (__int64)&v14, &v21);
        }
        else if ( (_WORD)v16 == 7 && v19 == 1 && v20 == (_WORD)v11 && BYTE1(v21) == 5 )
        {
          result = v22;
          if ( !v22 )
            return result;
        }
      }
      else if ( (_WORD)v16 == 209 || (_WORD)v16 == 216 )
      {
        if ( v19 == 1 && v20 == (_WORD)v11 && BYTE1(v21) == 1 && HIWORD(v21) == (_WORD)v11 )
          return 0;
      }
      else if ( (_WORD)v16 == 131 && v19 == 1 && v20 == (_WORD)v11 && BYTE1(v21) == 5 )
      {
        result = v22;
        if ( v22 == -1 )
          return result;
      }
    }
    while ( !sub_13BC0((__int64)&v14, v11, 0) );
  }
  return a4;
}

