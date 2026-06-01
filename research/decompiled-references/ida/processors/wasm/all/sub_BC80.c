_BOOL8 __fastcall sub_BC80(__int64 a1, unsigned __int16 a2, _DWORD *a3, __int64 a4)
{
  unsigned __int64 v7; // rax
  _DWORD *v8; // rax
  __int64 i; // rdx

  if ( (unsigned __int8)has_insn_feature(a2, 1024) )
  {
    v7 = 3;
    goto LABEL_7;
  }
  if ( (unsigned __int8)has_insn_feature(a2, 512) )
  {
    v7 = 2;
LABEL_7:
    if ( *(_QWORD *)(a1 + 16) >= v7 && a4 == v7 )
    {
      v8 = a3;
      for ( i = 0; !*v8 || *v8 == *(_DWORD *)(*(_QWORD *)(a1 + 8) + i); i += 16 )
      {
        if ( &a3[a4] == ++v8 )
          return 1;
      }
    }
    return 0;
  }
  if ( (unsigned __int8)has_insn_feature(a2, 256) )
  {
    v7 = 1;
    goto LABEL_7;
  }
  return !a4;
}

