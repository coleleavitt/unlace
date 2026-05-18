__int64 __fastcall sub_E5490(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 40);
  if ( !*(_BYTE *)(v2 + 64) )
    *(_DWORD *)(a2 + 4) |= 0x40000000u;
  result = 0;
  if ( *(_BYTE *)a2 == 0x9C )
  {
    if ( *(_BYTE *)(**(_QWORD **)v2 + 197LL) )
    {
      *(_BYTE *)a2 = 121;
    }
    else
    {
      sub_DBD10(*(_QWORD *)v2, "%s cannot use variables", *(const char **)(v2 + 80));
      return 2;
    }
  }
  return result;
}
