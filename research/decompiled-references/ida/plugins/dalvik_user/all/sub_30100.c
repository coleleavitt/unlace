__int64 __fastcall sub_30100(__int64 a1, __int64 *a2, const void *a3)
{
  __int64 result; // rax
  _QWORD *v6; // r13
  _BOOL4 v7; // eax
  __int64 v8; // r15
  _BOOL4 v9; // r12d
  __int64 v10; // rbx
  size_t v11; // rax
  size_t v12; // r12
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rax
  void *v19; // rdi
  size_t v20; // rdx
  __int64 v21; // rax
  size_t v22; // [rsp+8h] [rbp-70h]
  __int64 v23; // [rsp+18h] [rbp-60h] BYREF
  __int64 v24; // [rsp+20h] [rbp-58h] BYREF
  __int128 v25; // [rsp+28h] [rbp-50h]
  unsigned __int64 v26; // [rsp+38h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  result = sub_1AE00(a1, a2, a3, -1);
  if ( !(_BYTE)result )
  {
    v6 = (_QWORD *)(a1 + 1040);
    v25 = 0;
    v24 = 0;
    v7 = sub_2FDA0((_QWORD *)(a1 + 1040), &v24, (const char *)a3);
    v8 = v24;
    v9 = v7;
    if ( v7 && 40LL * (_QWORD)v25 )
    {
      do
      {
        v16 = a2[1];
        v17 = *a2;
        if ( a2[2] < (unsigned __int64)(v16 + 1) )
        {
          v18 = qvector_reserve();
          *a2 = v18;
          v16 = a2[1];
          v17 = v18;
        }
        v10 = v17 + 48 * v16;
        *(_QWORD *)v10 = 0;
        *(_OWORD *)(v10 + 8) = 0;
        ++a2[1];
        if ( a3 && (v11 = strlen((const char *)a3), (v12 = v11) != 0) )
        {
          v19 = *(void **)v10;
          v20 = v11 + 1;
          if ( *(_QWORD *)(v10 + 16) < v11 + 1 )
          {
            v22 = v11 + 1;
            v21 = qvector_reserve();
            *(_QWORD *)v10 = v21;
            v20 = v22;
            v19 = (void *)v21;
          }
          *(_QWORD *)(v10 + 8) = v20;
          memmove(v19, a3, v12);
          *(_BYTE *)(*(_QWORD *)v10 + v12) = 0;
        }
        else
        {
          *(_QWORD *)(v10 + 8) = 0;
        }
        *(_DWORD *)(v10 + 24) = *(_DWORD *)v8;
        if ( !(unsigned __int8)sub_2DB20(v6, nullptr, nullptr, &v23, (_QWORD *)(v8 + 8)) )
        {
          v14 = v24;
LABEL_15:
          v8 = v14;
          v9 = 0;
          goto LABEL_16;
        }
        v13 = sub_2CA10(v6, (__int64 *)(v10 + 32), (_QWORD *)(v8 + 8));
        v14 = v24;
        v9 = v13;
        if ( !(_BYTE)v13 )
          goto LABEL_15;
        v15 = v23 - *(_QWORD *)(v8 + 32);
        v8 += 40;
        *(_QWORD *)(v10 + 40) = 2 * v15;
      }
      while ( v8 != v14 + 40LL * (_QWORD)v25 );
      v8 = v14;
    }
LABEL_16:
    if ( v8 )
    {
      *(_QWORD *)&v25 = 0;
      qfree();
    }
    return v9;
  }
  return result;
}

