__int64 __fastcall sub_2DE70(__int64 a1, double a2)
{
  unsigned int v2; // ecx
  _QWORD *v3; // rdx
  __int64 v4; // rax
  __int64 v6; // rax

  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(_QWORD **)(*(_QWORD *)a1 + 232LL);
  if ( v2 <= 0xA )
  {
    v4 = 1LL << v2;
    if ( ((1LL << v2) & 0x72A) != 0 )
    {
      v6 = v3[4];
      if ( v6 == -1 )
      {
        sub_EAA0((__int64)"%a: Illegal static TLS relocation without static thread pointer\n", a2);
        return 0;
      }
      *(_QWORD *)(a1 + 56) = v6;
    }
    else if ( (v4 & 0x90) == 0 )
    {
      if ( (v4 & 0x44) != 0 )
      {
        if ( *(_DWORD *)(a1 + 48) == 1 )
          *(_QWORD *)(a1 + 56) = *v3;
        else
          *(_QWORD *)(a1 + 56) = *(_QWORD *)(v3[5] + 16LL);
        return 1;
      }
      goto LABEL_12;
    }
    return 1;
  }
LABEL_12:
  if ( under_debugger )
    BUG();
  interr(20127);
  return sub_2DF10();
}
