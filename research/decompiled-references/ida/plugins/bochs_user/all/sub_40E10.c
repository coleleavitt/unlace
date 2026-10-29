unsigned __int64 __fastcall sub_40E10(__int64 a1)
{
  int v1; // ecx
  size_t v2; // rbp
  char v4[1032]; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v5; // [rsp+408h] [rbp-20h]

  v1 = *(_DWORD *)(a1 + 32);
  v5 = __readfsqword(0x28u);
  if ( v1 > 1 )
    *(_DWORD *)(a1 + 32) = v1 + 1;
  qsnprintf();
  v2 = strlen(v4);
  if ( write(*(_DWORD *)(a1 + 28), v4, v2) != v2 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  return v5 - __readfsqword(0x28u);
}

