__int64 __fastcall sub_3FB20(__int64 a1, unsigned int a2, unsigned int a3, const void *a4, unsigned __int64 a5)
{
  unsigned int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned __int64 v13; // rax
  _QWORD *v14; // r15
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 *v21; // rdi
  __int64 v22; // rax
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  bool v25; // cf
  _QWORD *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r10
  __int64 *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // [rsp+8h] [rbp-50h]
  __int64 v33; // [rsp+8h] [rbp-50h]
  __int64 v34; // [rsp+8h] [rbp-50h]
  _QWORD v35[9]; // [rsp+10h] [rbp-48h] BYREF

  v35[1] = __readfsqword(0x28u);
  if ( a3 >= a2 )
  {
    v10 = a3;
    v11 = a2;
  }
  else
  {
    v10 = a2;
    v11 = a3;
  }
  v12 = 1;
  if ( v10 >= v11 + 4198400 )
  {
    v13 = *(_QWORD *)(a1 + 24);
    v14 = *(_QWORD **)(a1 + 16);
    if ( a5 != v13 )
    {
      v35[0] = 0;
      if ( a5 >= v13 )
      {
        v15 = *(_QWORD *)(a1 + 32);
        if ( v35 < v14 || v35 >= &v14[v15] )
        {
          if ( v15 < a5 )
          {
            v32 = *(_QWORD *)(a1 + 32);
            v18 = qvector_reserve();
            v19 = *(_QWORD *)(a1 + 32);
            v14 = (_QWORD *)v18;
            v20 = *(_QWORD *)(a1 + 24);
            v21 = *(__int64 **)(a1 + 16);
            *(_QWORD *)(a1 + 32) = v32;
            v22 = v20 - 1;
            if ( v22 >= 0 )
            {
              v23 = v14;
              do
              {
                v24 = *v21;
                ++v23;
                ++v21;
                *(v23 - 1) = v24;
                v25 = v22-- == 0;
              }
              while ( !v25 );
            }
            qfree();
            *(_QWORD *)(a1 + 16) = v14;
            v13 = *(_QWORD *)(a1 + 24);
            *(_QWORD *)(a1 + 32) = v19;
          }
          if ( v13 < a5 )
          {
            v16 = v35[0];
            do
            {
              v14[v13++] = v16;
              v14 = *(_QWORD **)(a1 + 16);
            }
            while ( a5 != v13 );
          }
        }
        else
        {
          if ( v15 < a5 )
          {
            v33 = *(_QWORD *)(a1 + 32);
            v14 = (_QWORD *)qvector_reserve();
            v26 = v14;
            v27 = *(_QWORD *)(a1 + 24);
            v28 = *(_QWORD *)(a1 + 32);
            v29 = *(__int64 **)(a1 + 16);
            *(_QWORD *)(a1 + 32) = v33;
            v30 = v27 - 1;
            if ( v30 >= 0 )
            {
              do
              {
                v31 = *v29;
                ++v26;
                ++v29;
                *(v26 - 1) = v31;
                v25 = v30-- == 0;
              }
              while ( !v25 );
            }
            v34 = v28;
            qfree();
            *(_QWORD *)(a1 + 16) = v14;
            v13 = *(_QWORD *)(a1 + 24);
            *(_QWORD *)(a1 + 32) = v34;
          }
          if ( v13 < a5 )
          {
            do
            {
              v14[v13++] = 0;
              v14 = *(_QWORD **)(a1 + 16);
            }
            while ( a5 != v13 );
          }
        }
      }
      *(_QWORD *)(a1 + 24) = a5;
    }
    memcpy(v14, a4, 8 * a5);
    *(_DWORD *)(a1 + 8) = a2;
    *(_DWORD *)(a1 + 12) = a3;
    sub_3F9E0((_QWORD *)a1);
    return 0;
  }
  return v12;
}

