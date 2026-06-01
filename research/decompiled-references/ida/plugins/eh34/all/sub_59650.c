unsigned __int64 __fastcall sub_59650(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r14
  _QWORD *v4; // rbx
  _QWORD *v5; // rbp
  unsigned __int64 v6; // rbp
  __int64 v7; // rbx
  _QWORD *v8; // r15
  _QWORD *v9; // r13
  void *v10; // rdi
  _QWORD *v11; // rbx
  _QWORD *v12; // rbp
  __int64 v14; // [rsp+10h] [rbp-148h] BYREF
  char v15; // [rsp+1Ch] [rbp-13Ch]
  void *v16[14]; // [rsp+20h] [rbp-138h] BYREF
  _BYTE v17[40]; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+B8h] [rbp-A0h]
  __int64 v19; // [rsp+C8h] [rbp-90h]
  void *s; // [rsp+D8h] [rbp-80h]
  __int64 v21; // [rsp+E0h] [rbp-78h]
  void *v22; // [rsp+E8h] [rbp-70h]
  __int64 v23; // [rsp+F0h] [rbp-68h]
  char v24; // [rsp+108h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+118h] [rbp-40h]

  v2 = a1[1];
  v25 = __readfsqword(0x28u);
  if ( v2 != a2 )
  {
    v14 = -1;
    memset(v16, 0, sizeof(v16));
    v15 = 0;
    BYTE4(v16[1]) = 1;
    v16[7] = &v16[13];
    v16[8] = &dword_0 + 1;
    v16[11] = (void *)1065353216;
    if ( a2 < v2 )
    {
      v6 = a2;
      do
      {
        v7 = *a1 + (v6 << 7);
        v8 = *(_QWORD **)(v7 + 88);
        while ( v8 )
        {
          v9 = v8;
          v8 = (_QWORD *)*v8;
          qfree(v9[3]);
          operator delete(v9, 0x28u);
        }
        memset(*(void **)(v7 + 72), 0, 8LL * *(_QWORD *)(v7 + 80));
        v10 = *(void **)(v7 + 72);
        *(_QWORD *)(v7 + 96) = 0;
        *(_QWORD *)(v7 + 88) = 0;
        if ( v10 != (void *)(v7 + 120) )
          operator delete(v10, 8LL * *(_QWORD *)(v7 + 80));
        ++v6;
        qfree(*(_QWORD *)(v7 + 56));
        qfree(*(_QWORD *)(v7 + 40));
      }
      while ( v2 != v6 );
      a1[1] = a2;
    }
    else if ( (unsigned __int64)&v14 < *a1 || (unsigned __int64)&v14 >= (a1[2] << 7) + *a1 )
    {
      sub_59450(a1, a2, (__int64)&v14);
    }
    else
    {
      sub_58500((__int64)v17, (__int64)&v14);
      sub_59450(a1, a2, (__int64)v17);
      v4 = v22;
      if ( v22 )
      {
        do
        {
          v5 = v4;
          v4 = (_QWORD *)*v4;
          qfree(v5[3]);
          operator delete(v5, 0x28u);
        }
        while ( v4 );
      }
      memset(s, 0, 8 * v21);
      v23 = 0;
      v22 = nullptr;
      if ( s != &v24 )
        operator delete(s, 8 * v21);
      qfree(v19);
      qfree(v18);
    }
    v11 = v16[9];
    if ( v16[9] )
    {
      do
      {
        v12 = v11;
        v11 = (_QWORD *)*v11;
        qfree(v12[3]);
        operator delete(v12, 0x28u);
      }
      while ( v11 );
    }
    memset(v16[7], 0, 8 * (__int64)v16[8]);
    v16[10] = nullptr;
    v16[9] = nullptr;
    if ( v16[7] != &v16[13] )
      operator delete(v16[7], 8 * (__int64)v16[8]);
    qfree(v16[5]);
    qfree(v16[3]);
  }
  return v25 - __readfsqword(0x28u);
}

