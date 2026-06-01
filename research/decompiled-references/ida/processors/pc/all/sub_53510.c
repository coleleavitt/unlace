void __fastcall sub_53510(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 named_type_tid; // rax
  __int64 v4; // rax

  v2 = *(_QWORD *)(a1 + 5624);
  if ( !v2 )
  {
    named_type_tid = get_named_type_tid();
    *(_QWORD *)(a1 + 5624) = named_type_tid;
    if ( named_type_tid != -1 )
      goto LABEL_5;
    v4 = sub_52B40(
           (__int64)"unsigned int   Data1;unsigned short Data2;unsigned short Data3;unsigned char  Data4[8];",
           "_GUID");
    *(_QWORD *)(a1 + 5624) = v4;
    v2 = v4;
  }
  if ( v2 == -1 )
  {
    *a2 += 16LL;
    return;
  }
LABEL_5:
  create_data();
  *a2 += 16LL;
}
