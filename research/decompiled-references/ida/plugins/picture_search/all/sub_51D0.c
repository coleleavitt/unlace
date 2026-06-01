__int64 __fastcall sub_51D0(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // r12d
  const char *v4; // r13
  const char *v5; // rcx

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 == 35 )
  {
    v3 = 6;
    v4 = nullptr;
    v5 = "Open picture";
    if ( *(_QWORD *)(a2 + 40) != *(_QWORD *)(*(_QWORD *)(a1 + 16) + 144LL) )
      goto LABEL_5;
    if ( !*(_QWORD *)(a2 + 56) )
      goto LABEL_4;
LABEL_9:
    v3 = 3;
    v4 = nullptr;
    v5 = "Open picture";
    goto LABEL_5;
  }
  if ( (unsigned int)(v2 - 27) > 1 )
  {
    v3 = 6;
    v4 = nullptr;
    v5 = "Open picture";
    goto LABEL_5;
  }
  if ( (*(_BYTE *)(a2 + 80) & 1) == 0 )
  {
    if ( (unsigned __int8)is_debugger_on() )
    {
      *(_QWORD *)(a1 + 32) = 5;
      v3 = 3;
      v4 = "picture auto-detection is disabled while debugging";
      v5 = "Try to decode as picture";
      goto LABEL_5;
    }
    if ( (unsigned __int8)sub_50E0(a1, *(_QWORD *)(a2 + 88)) )
      goto LABEL_9;
  }
LABEL_4:
  v3 = 7;
  v4 = nullptr;
  v5 = "Open picture";
LABEL_5:
  callui(140, "picture_search:open_picture", 1, v5);
  callui(140, "picture_search:open_picture", 3, v4);
  return v3;
}

