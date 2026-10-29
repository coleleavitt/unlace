unsigned __int64 __fastcall sub_4C670(__int64 a1, __int64 *a2, _QWORD *a3, __int64 *a4)
{
  __int64 v4; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rdx
  size_t v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v18; // [rsp+48h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 80) + 40LL) )
  {
    a4[1] = 0;
    v4 = *(_QWORD *)(a1 + 80);
    v6 = *(_QWORD *)(v4 + 32);
    if ( 24LL * *(_QWORD *)(v4 + 40) )
    {
      do
      {
        utf8_utf16();
        sub_4ACC0(a4, &unk_61EF8, 2u);
        v6 += 24;
      }
      while ( v6 != *(_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL) + 24LL * *(_QWORD *)(*(_QWORD *)(a1 + 80) + 40LL) );
    }
    sub_4ACC0(a4, &unk_61EF8, 2u);
    v7 = *(_QWORD *)(a1 + 80);
    v8 = a4[1];
    v9 = *(_QWORD *)(v7 + 32);
    if ( 24LL * *(_QWORD *)(v7 + 40) )
    {
      do
      {
        v10 = *(_QWORD *)(v9 + 8);
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
            sub_4ACC0(a4, *(const void **)v9, v11);
        }
        v12 = a4[1];
        v13 = *a4;
        if ( a4[2] < (unsigned __int64)(v12 + 1) )
        {
          v14 = qvector_reserve();
          *a4 = v14;
          v13 = v14;
          v12 = a4[1];
        }
        *(_BYTE *)(v13 + v12) = 0;
        v9 += 24;
        ++a4[1];
      }
      while ( v9 != *(_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL) + 24LL * *(_QWORD *)(*(_QWORD *)(a1 + 80) + 40LL) );
    }
    sub_4ACC0(a4, &unk_61EF8, 2u);
    *a3 = *a4 + v8;
    *a2 = *a4;
  }
  else
  {
    *a2 = (__int64)&unk_61EE4;
    *a3 = &unk_61EF4;
  }
  return v18 - __readfsqword(0x28u);
}

