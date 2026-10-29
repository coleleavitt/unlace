__int64 __fastcall sub_54B0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 v4; // rcx
  __int64 v5; // rbp
  int v6; // eax

  v2 = *(unsigned int *)(a2 + 24);
  v3 = *(unsigned int *)(a2 + 16);
  if ( qlsize() < (unsigned __int64)(v2 + v3) )
  {
    sub_53E0((__int64)"Cannot read %llu bytes, starting at offset %llu", v3, v2);
LABEL_6:
    v5 = 0;
    goto LABEL_7;
  }
  v5 = qalloc(v3);
  if ( !v5 )
  {
    sub_53E0((__int64)"No memory for DBG-info");
    goto LABEL_6;
  }
  qlseek(a1, v2, 0, v4);
  v6 = qlread(a1, v5, v3);
  if ( v3 == v6 )
    return v5;
  sub_53E0((__int64)"Couldn't read %llu bytes, starting at offset %llu (got %u)", v3, v2, v6);
LABEL_7:
  qfree(v5);
  return 0;
}
