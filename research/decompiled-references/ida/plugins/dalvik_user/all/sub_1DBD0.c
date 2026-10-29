unsigned __int64 __fastcall sub_1DBD0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rax
  size_t v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // r15
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rbx
  __int64 v17; // rsi
  _BYTE src[1032]; // [rsp+10h] [rbp-448h] BYREF
  unsigned __int64 v20; // [rsp+418h] [rbp-40h]

  v3 = *a2;
  v20 = __readfsqword(0x28u);
  if ( v3 )
  {
    a2[1] = 0;
    qfree();
    *a2 = 0;
    a2[2] = 0;
  }
  while ( 1 )
  {
    v5 = sub_5D5E0(*(_QWORD *)(a1 + 8), 10000);
    v6 = *(_QWORD *)(a1 + 8);
    if ( v5 <= 0 )
      break;
    v7 = sub_5D5B0(v6, src, 1024);
    v8 = v7;
    if ( v7 <= 0 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      break;
    }
    v9 = a2[1];
    v10 = v7;
    if ( v9 )
    {
      --v9;
      v10 = v7 + v9;
    }
    v11 = *a2;
    v12 = v10 + 1;
    if ( a2[2] < (unsigned __int64)(v10 + 1) )
    {
      v13 = qvector_reserve();
      v12 = v10 + 1;
      *a2 = v13;
      v11 = v13;
    }
    a2[1] = v12;
    *(_BYTE *)(v11 + v10) = 0;
    memmove((void *)(v9 + *a2), src, v8);
  }
  if ( (unsigned int)sub_5D5C0(v6) == 62 )
    *(_BYTE *)(a1 + 1) = 1;
  if ( *(_BYTE *)(sub_135E0() + 792) )
  {
    v14 = a2[1];
    if ( v14 )
    {
      v15 = dword_7F75C;
      v16 = v14 - 1;
      v17 = dword_7F75C;
      if ( v14 - 1 <= (unsigned __int64)dword_7F75C )
        v17 = v14 - 1;
      sub_19E80();
      if ( v15 < v16 )
        sub_11340((__int64)"...\n", v17);
    }
    else
    {
      sub_19E80();
    }
  }
  return v20 - __readfsqword(0x28u);
}

