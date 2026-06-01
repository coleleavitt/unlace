void __fastcall sub_349E0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 *v3; // rax
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  const char *v7; // rsi

  v2 = *a2;
  if ( *a2 != *(_QWORD *)(a1 + 72) )
  {
    *(_QWORD *)(a1 + 72) = v2;
    if ( (debug & 0x400000) != 0 )
    {
      v3 = sub_34340(a1);
      v7 = src;
      if ( v3[1] )
        v7 = (const char *)*v3;
      sub_88B80((unsigned int)"%s type_hash -> %llx\n", (_DWORD)v7, v2, v4, v5, v6);
    }
  }
}

