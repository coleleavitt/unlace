__int64 __fastcall sub_2B40(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char *v4; // rax
  __int64 (*v5)(); // rax
  __int64 result; // rax
  unsigned __int16 v7; // ax
  _DWORD *v8; // rsi
  __int64 v9; // rdi
  _DWORD *v10; // rcx
  _DWORD *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r12
  int v15; // r13d
  __int64 v16; // rdx
  __int64 (*v17)(); // rax
  int v18; // r12d
  __int64 not_tail; // rax
  __int64 v20; // rdx
  __int64 (*v21)(); // rax
  int v22; // [rsp+0h] [rbp-1ACh]
  __int128 v23; // [rsp+4h] [rbp-1A8h] BYREF
  __int64 v24; // [rsp+14h] [rbp-198h]
  __int64 v25; // [rsp+1Ch] [rbp-190h]
  __int64 v26; // [rsp+24h] [rbp-188h]
  char v27; // [rsp+2Ch] [rbp-180h] BYREF
  _QWORD v28[8]; // [rsp+16Ch] [rbp-40h] BYREF

  v28[0] = __readfsqword(0x28u);
  v3 = a2;
  v4 = &v27;
  v23 = -1;
  v24 = -1;
  v25 = 0;
  v26 = 0;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 40;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *((_QWORD *)v4 - 2) = 0;
  }
  while ( v4 != (char *)v28 );
  if ( (unsigned int)decode_insn(&v23, a2, v28, 0.0) )
  {
    v5 = *(__int64 (**)())(*(_QWORD *)a1 + 16LL);
    if ( v5 != sub_29B0 )
    {
      v7 = ((__int64 (__fastcall *)(__int64, __int128 *))v5)(a1, &v23);
      if ( v7 != 0xFFFF )
      {
        v8 = *(_DWORD **)(a1 + 16);
        v9 = *(_QWORD *)(a1 + 24);
        v10 = &v8[v9];
        if ( v8 != v10 )
        {
          v11 = *(_DWORD **)(a1 + 16);
          while ( v7 != *v11 )
          {
            if ( v10 == ++v11 )
              return -1;
          }
          if ( v11 != v10 )
          {
            v12 = v11 - v8;
            if ( (_DWORD)v12 != -1 )
            {
              v13 = (int)v12 + 1;
              if ( v13 != v9 )
              {
                v22 = v8[v13];
                if ( (_WORD)v22 != 0xFFFF )
                {
                  v14 = v24;
                  if ( *(int *)(a1 + 64) > 0 )
                  {
                    v15 = 0;
                    do
                    {
                      v14 += WORD1(v25);
                      if ( (get_flags_ex(v14, 4) & 0x10000) == 0 )
                        break;
                      if ( get_first_fcref_from(v14) != -1 )
                        break;
                      if ( !(unsigned int)decode_insn(&v23, v14, v16, 0.0) )
                        break;
                      v17 = *(__int64 (**)())(*(_QWORD *)a1 + 24LL);
                      if ( v17 == sub_29C0 )
                        break;
                      result = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD))v17)(
                                 a1,
                                 &v23,
                                 (unsigned __int16)v22);
                      if ( result == -2 )
                        break;
                      if ( result != -1 )
                        return result;
                      ++v15;
                    }
                    while ( *(_DWORD *)(a1 + 64) > v15 );
                  }
                  if ( *(int *)(a1 + 68) > 0 )
                  {
                    v18 = 0;
                    do
                    {
                      if ( (get_flags_ex(v3, 4) & 0x10000) == 0 )
                        break;
                      not_tail = prev_not_tail(v3);
                      v3 = not_tail;
                      if ( not_tail == -1 )
                        break;
                      if ( (~(unsigned __int16)get_flags_ex(not_tail, 4) & 0x600) != 0 )
                        break;
                      if ( get_first_fcref_from(v3) != -1 )
                        break;
                      if ( !(unsigned int)decode_insn(&v23, v3, v20, 0.0) )
                        break;
                      v21 = *(__int64 (**)())(*(_QWORD *)a1 + 24LL);
                      if ( v21 == sub_29C0 )
                        break;
                      result = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD))v21)(
                                 a1,
                                 &v23,
                                 (unsigned __int16)v22);
                      if ( result == -2 )
                        break;
                      if ( result != -1 )
                        return result;
                      ++v18;
                    }
                    while ( *(_DWORD *)(a1 + 68) > v18 );
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return -1;
}
