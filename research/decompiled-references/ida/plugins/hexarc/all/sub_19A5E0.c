void __fastcall sub_19A5E0(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ecx
  __int64 v4; // rax
  int v5; // eax

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = -1;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  if ( a3 )
  {
    if ( a3[1] || a3[8] )
    {
      v3 = *(_DWORD *)(a3[4] + 72LL);
      v4 = a3[11];
      *(_DWORD *)(a1 + 40) = v3;
      v5 = *(_DWORD *)(v4 + 72);
      if ( v5 == v3 )
        v5 = -1;
    }
    else
    {
      v3 = -1;
      v5 = -1;
    }
    *(_DWORD *)(a1 + 44) = v5;
    sub_19A420((_QWORD *)a1, (__int64 *)(a1 + 48), v3);
    sub_19A420((_QWORD *)a1, (__int64 *)(a1 + 88), *(_DWORD *)(a1 + 44));
  }
}

