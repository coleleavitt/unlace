__int64 __fastcall sub_1FE60(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // eax

  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 == 1879048195 )
  {
    sub_CB60(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 24), *(_QWORD *)(a2 + 32));
    return 0;
  }
  else
  {
    if ( (debug & 0x10) != 0 )
      sub_E950((__int64)"Unsupported or unknown section type 0x%X, skipped\n", v3);
    return a3;
  }
}
