__int64 __fastcall sub_25F10(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  __int64 result; // rax

  v3 = *(_BYTE *)(a2 + 1);
  if ( v3 != 4 )
  {
    if ( v3 == 2 )
    {
      if ( *(_BYTE *)(a2 + 32) )
        goto LABEL_4;
    }
    else if ( v3 == 3 )
    {
      goto LABEL_4;
    }
    return 0;
  }
LABEL_4:
  if ( (_DWORD)a3 == -1 )
    return sub_6D5F0(a1, a2, 4, 0);
  result = sub_6D5F0(a1, a2, a3, 0);
  if ( !(_BYTE)result )
    return sub_6D5F0(a1, a2, 4, 0);
  return result;
}
