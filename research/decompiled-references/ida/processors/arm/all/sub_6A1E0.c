__int64 __fastcall sub_6A1E0(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = (*(int *)(a1 + 16) >> 8) & 1 | (*(_DWORD *)(a1 + 16) >> 22) & 2;
  if ( v1 == 2 )
  {
LABEL_5:
    if ( (unsigned int)sub_680A0(a1) )
      return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
    goto LABEL_6;
  }
  if ( v1 == 3 )
    goto LABEL_7;
  if ( v1 != 1 )
  {
    if ( (unsigned int)sub_671F0(a1) )
      return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
    goto LABEL_5;
  }
LABEL_6:
  if ( !(unsigned int)sub_68470(a1) )
  {
LABEL_7:
    result = sub_68E40(a1);
    if ( !(_DWORD)result )
      return result;
  }
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
}
