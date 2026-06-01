unsigned __int64 __fastcall sub_1C9E0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  bool v3; // zf
  __int64 v5; // rax
  char v7; // al
  unsigned int v8; // r13d
  unsigned __int64 v9; // r14
  __int64 v10; // rbp
  unsigned __int64 v11; // rax
  size_t v12; // r14
  void *v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rsi
  unsigned __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // r12
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // [rsp+10h] [rbp-60h]
  void *src; // [rsp+18h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+20h] [rbp-50h]
  unsigned __int64 v26; // [rsp+30h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 24);
  v26 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(v2 + 56) == 0;
  *(_OWORD *)n = 0;
  src = nullptr;
  if ( !v3 )
  {
    v5 = netnode_supfirst();
    if ( v5 != -1 )
    {
      if ( *(_QWORD *)(v2 + 56) )
      {
        v7 = sub_34510(&src, **(_QWORD **)(v2 + 48), (unsigned int)v5, 85);
        v8 = 1;
        while ( 1 )
        {
          if ( !v7 )
            goto LABEL_3;
          v12 = n[0];
          v13 = nullptr;
          if ( n[0] )
          {
            v13 = (void *)qalloc_or_throw();
            memcpy(v13, src, v12);
          }
          v14 = a2[1];
          v15 = *a2;
          if ( a2[2] < (unsigned __int64)(v14 + 1) )
          {
            v20 = qvector_reserve();
            *a2 = v20;
            v14 = a2[1];
            v15 = v20;
          }
          v16 = v8;
          v17 = v15 + 24 * v14;
          *(_QWORD *)v17 = v13;
          *(__m128i *)(v17 + 8) = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
          ++a2[1];
          v18 = *(_QWORD *)(a1 + 24);
          v19 = *(_QWORD *)(v18 + 56);
          if ( v19 < v8 )
            goto LABEL_3;
          v9 = v8 - 1;
          if ( v9 >= v19 )
            break;
          v10 = netnode_supnext();
          v11 = *(_QWORD *)(v18 + 56);
          if ( v10 == -1 )
          {
            if ( ++v8 == -1 )
            {
              if ( !v11 )
                goto LABEL_3;
              v21 = 0;
              v8 = 1;
              v16 = 0;
            }
            else
            {
              if ( v11 < v8 )
                goto LABEL_3;
              if ( v16 >= v11 )
                goto LABEL_31;
              v21 = 8 * v16;
            }
            v23 = v21;
            v22 = netnode_supfirst();
            if ( v22 == -1 )
              goto LABEL_3;
            if ( v16 >= *(_QWORD *)(v18 + 56) )
              goto LABEL_32;
            v7 = sub_34510(&src, *(_QWORD *)(*(_QWORD *)(v18 + 48) + v23), (unsigned int)v22, 85);
          }
          else
          {
            if ( v9 >= v11 )
              goto LABEL_30;
            v7 = sub_34510(&src, *(_QWORD *)(*(_QWORD *)(v18 + 48) + 8 * v9), (unsigned int)v10, 85);
          }
        }
        if ( under_debugger )
          BUG();
        interr();
LABEL_30:
        sub_16850();
LABEL_31:
        sub_16850();
LABEL_32:
        sub_16850();
      }
      sub_16850();
    }
  }
LABEL_3:
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  return v26 - __readfsqword(0x28u);
}

