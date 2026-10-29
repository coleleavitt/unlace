__int64 __fastcall sub_2DFC0(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rax

  v2 = (unsigned int *)sub_2CEC0(*(__int64 **)(a1 + 16), 0x2000000, 0x400u, 0x4000000);
  if ( v2 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 32LL))(
             *(_QWORD *)(a1 + 8),
             a2,
             *v2);
  else
    return 1;
}

