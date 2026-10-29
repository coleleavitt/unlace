__int64 __fastcall sub_35A20(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rax

  if ( (unsigned __int8)sub_31740(a3, (__int64)&unk_7A0B8, 8u) )
  {
    v6 = *a3;
    *a2 = *a3;
    *a2 += (int)((unsigned int)get_dword(v6) << 16);
LABEL_5:
    v7 = *a2 + (__int16)get_dword(*a3 + 4);
    *a2 = v7;
    *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v7;
    return 1;
  }
  result = sub_31740(a3, (__int64)&unk_7A0B0, 8u);
  if ( (_BYTE)result )
  {
    *a2 = (int)((unsigned int)get_dword(*a3) << 16);
    goto LABEL_5;
  }
  return result;
}

