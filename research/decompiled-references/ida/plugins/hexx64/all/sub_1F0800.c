void __fastcall sub_1F0800(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rax

  if ( a3 )
  {
    if ( *(_BYTE *)(a3 + 48) )
    {
      v4 = *(_QWORD *)(a3 + 80);
      if ( a4 || *(int *)(a2 + 88) <= v4 )
        sub_217480(a1, a2, (_BYTE *)(a3 + 48), v4);
    }
    else if ( (*(_BYTE *)(a3 + 88) & 4) != 0 )
    {
      *(_DWORD *)(a2 + 24) |= 0x40000u;
    }
  }
}

