__int64 __fastcall sub_4CF10(double a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  int v4; // ebp
  __int64 v5; // rbx
  __int64 v6; // r12

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 72LL))(a3);
  *(_WORD *)(v3 + 464) = -1;
  v4 = *(_DWORD *)(v3 + 460);
  v5 = v3;
  *(_QWORD *)(v3 + 448) = -1;
  v6 = *(_QWORD *)(v3 + 440);
  if ( (unsigned __int8)sub_4CA00(v3, 5, a1) )
  {
    *(_QWORD *)(v5 + 448) = *(_QWORD *)(v5 + 440);
    *(_WORD *)(v5 + 464) = *(_DWORD *)(v5 + 460);
  }
  *(_QWORD *)(v5 + 440) = v6;
  *(_DWORD *)(v5 + 460) = (unsigned __int16)v4;
  return 0;
}
