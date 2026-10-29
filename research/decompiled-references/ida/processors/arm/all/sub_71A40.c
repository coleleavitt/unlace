__int64 __fastcall sub_71A40(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v1 + 1) || !*(_BYTE *)(v1 + 41) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  if ( !(unsigned __int8)sub_711D0(a1, 1) )
    return 0;
  return sub_71870((_QWORD *)a1);
}
