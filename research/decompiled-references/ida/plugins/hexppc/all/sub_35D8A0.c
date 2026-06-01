unsigned __int64 __fastcall sub_35D8A0(__int64 a1, __int64 *a2, const char *a3)
{
  const char *v5; // rbp
  const char *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rsi
  char *v13; // rbx
  signed __int64 v14; // r15
  void *v15; // rdi
  signed __int64 v16; // rdx
  __int64 v17; // rax
  char v19; // [rsp+0h] [rbp-78h]
  __int64 v20; // [rsp+18h] [rbp-60h]
  __int64 v21; // [rsp+20h] [rbp-58h]
  signed __int64 v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( *a3 )
  {
    v5 = a3;
    do
    {
      v13 = strchr(v5, 58);
      if ( !v13 )
        v13 = (char *)&v5[strlen(v5)];
      v21 = 0;
      v14 = v13 - v5;
      if ( v13 == v5 )
        goto LABEL_3;
      v15 = nullptr;
      v16 = v14 + 1;
      if ( v14 != -1 )
      {
        v21 = qvector_reserve();
        v16 = v14 + 1;
        v15 = (void *)v21;
      }
      v22 = v16;
      memmove(v15, v5, v13 - v5);
      *(_BYTE *)(v21 + v14) = 0;
      if ( !v22 )
LABEL_3:
        v6 = s1;
      else
        v6 = (const char *)v21;
      if ( !(unsigned __int8)str2ea() || (v8 = v20 & *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), v20 != v8) )
        sub_314B30((__int64)"bad function address: %s", (__int64)v6, v7, v8, v9, v10, v19);
      v11 = a2[1];
      v12 = *a2;
      if ( a2[2] < (unsigned __int64)(v11 + 1) )
      {
        v17 = qvector_reserve();
        *a2 = v17;
        v12 = v17;
        v11 = a2[1];
      }
      *(_QWORD *)(v12 + 8 * v11) = v20;
      ++a2[1];
      v5 = &v13[*v13 == 58];
      if ( v21 )
        qfree();
    }
    while ( *v5 );
  }
  return v23 - __readfsqword(0x28u);
}

