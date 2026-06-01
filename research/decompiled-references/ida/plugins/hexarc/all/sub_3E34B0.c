__int64 *__fastcall sub_3E34B0(__int64 *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rbp
  __int64 v4; // rdi
  __int64 *result; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned __int64 not_tail; // rax
  __int64 v12; // r12
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 *v16; // rbp
  _QWORD *v17; // r13
  __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-60h]
  __int64 *v23; // [rsp+10h] [rbp-58h]
  __int64 *i; // [rsp+18h] [rbp-50h]
  __int64 *v25; // [rsp+28h] [rbp-40h]

  v2 = (__int64 *)a1[114];
  v3 = &v2[4 * a1[115]];
  while ( v3 != v2 )
  {
    v4 = *v2;
    v2 += 4;
    sub_116EE0(v4);
  }
  result = (__int64 *)a1[117];
  v23 = result;
  v25 = &result[a1[118]];
  if ( v25 != result )
  {
    do
    {
      v6 = (_QWORD *)a1[1];
      v7 = *v23;
      v8 = *(_QWORD *)(v6[65] + 8LL);
      if ( v8 )
      {
        while ( 1 )
        {
          if ( (*(_BYTE *)(v8 + 24) & 2) == 0 )
          {
            if ( v7 == *(_QWORD *)(v8 + 32) )
              break;
            v9 = *(_QWORD *)(v8 + 48);
            if ( v9 )
            {
              if ( v7 == *(_QWORD *)(v9 + 24) )
                break;
            }
          }
          v8 = *(_QWORD *)(v8 + 8);
          if ( !v8 )
            goto LABEL_10;
        }
        v10 = *(_QWORD *)(v8 + 16);
        if ( v10 )
        {
          if ( *(_DWORD *)(v10 + 76) != 6 )
          {
            if ( (get_flags_ex() & 0x10000) != 0 )
            {
              not_tail = prev_not_tail();
              v12 = not_tail;
              if ( not_tail >= *(_QWORD *)(v10 + 32) && not_tail < *(_QWORD *)(v10 + 40) )
              {
                if ( !(unsigned __int8)sub_9C4F0(v10) )
                {
                  v21 = sub_62A40(a1[1], *(_DWORD *)(v10 + 72) + 1);
                  *(_DWORD *)(v21 + 24) |= 2u;
                  v10 = v21;
                }
                v13 = sub_62A50(a1[1], v12, v12, 0);
                sub_3E33E0((_QWORD *)v10, v12, 268, v7, *(_DWORD *)(v13 + 72));
                v14 = j__qalloc_or_throw();
                *(_QWORD *)(v14 + 32) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v14 + 40) = 0;
                *(_QWORD *)(v14 + 48) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v14 + 56) = 0;
                *(_QWORD *)(v14 + 64) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v14 + 72) = 0;
                sub_329320(v14, v12);
                *(_BYTE *)(v14 + 32) = 1;
                *(_DWORD *)v14 = 13;
                *(_QWORD *)(v14 + 36) = 0xF800000004LL;
                sub_11A350(v14 + 48, *(_QWORD *)(*(_QWORD *)(v13 + 480) + 112LL), 1, 4, -1, 0);
                *(_BYTE *)(v14 + 64) = 1;
                *(_QWORD *)(v14 + 68) = 0xF800000004LL;
                sub_AEBD0((_QWORD *)v13, v14);
                sub_3E33E0((_QWORD *)v13, v12, 248, 0, *(_DWORD *)(v8 + 72));
                v15 = sub_62A50(a1[1], v12, v12, 0);
                v16 = (__int64 *)a1[120];
                v17 = (_QWORD *)v15;
                for ( i = &v16[a1[121]]; i != v16; v17 = (_QWORD *)sub_62A50(a1[1], v12, v12, 0) )
                {
                  v22 = *v16;
                  v18 = j__qalloc_or_throw();
                  *(_QWORD *)(v18 + 32) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v18 + 40) = 0;
                  *(_QWORD *)(v18 + 48) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v18 + 56) = 0;
                  *(_QWORD *)(v18 + 64) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v18 + 72) = 0;
                  sub_329320(v18, v12);
                  *(_BYTE *)(v18 + 32) = 1;
                  *(_DWORD *)v18 = 44;
                  *(_QWORD *)(v18 + 36) = 0x10800000004LL;
                  sub_11A350(v18 + 48, *(_QWORD *)(v17[60] + 112LL), v22, 4, -1, 0);
                  v19 = *(_QWORD *)(v17[60] + 112LL);
                  *(_BYTE *)(v18 + 64) = 6;
                  v20 = 8 * *(_DWORD *)(v19 + 84);
                  if ( (unsigned __int64)v20 <= 0x3F )
                    v22 &= ~(-1LL << v20);
                  ++v16;
                  *(_QWORD *)(v18 + 72) = v22;
                  sub_AEBD0(v17, v18);
                }
                sub_AEC00(v17, v12, *(_DWORD *)(v8 + 72));
                goto LABEL_11;
              }
            }
            v6 = (_QWORD *)a1[1];
          }
        }
      }
LABEL_10:
      sub_32F270(v6, v7, (__int64)"bad loop end");
LABEL_11:
      result = ++v23;
    }
    while ( v25 != v23 );
  }
  return result;
}

