__int64 __fastcall sub_46C00(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rdx
  _QWORD *v3; // rbx
  bool v4; // zf
  __int64 v5; // rax

  sub_3BA30(*(_QWORD **)(a1 + 48), 0x10000);
  v1 = sub_46B00(a1, *(_QWORD *)(a1 + 56) + 8336LL);
  if ( !v1 )
  {
    v2 = *(_QWORD *)(a1 + 48);
    if ( (*(_DWORD *)debug & 0x10000) != 0 )
    {
      sub_E960((__int64)"load_pe() consumed %zu kb\n", (unsigned __int64)(0xFFFFFFFFLL - *(_QWORD *)(v2 + 40)) >> 10);
      v2 = *(_QWORD *)(a1 + 48);
    }
    *(_QWORD *)(v2 + 40) = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 56) + 8224LL) << 10);
    v3 = *(_QWORD **)(a1 + 48);
    v4 = (*(unsigned int (__fastcall **)(_QWORD *))(*v3 + 40LL))(v3) == 2;
    v5 = 2146435072;
    if ( v4 )
      v5 = 0x7FFFFFFE0000LL;
    v3[4] = v5;
  }
  return v1;
}

