__int64 __fastcall sub_3EFE00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  _DWORD *v4; // rax
  int v5; // ecx
  int v6; // edx
  __int64 result; // rax

  *(_QWORD *)a1 = &unk_4BFCB0;
  v3 = *(_QWORD *)(a2 + 1496);
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 8) = v3;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 64) = a3;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_BYTE *)(a1 + 176) = 16;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  v4 = *(_DWORD **)(v3 + 784);
  if ( a3 == -1 )
  {
    if ( !under_debugger )
      sub_37CFE0(0xC944u, 0.0);
    BUG();
  }
  v5 = v4[2];
  *(_DWORD *)(a1 + 72) = v5;
  v6 = v4[3];
  *(_DWORD *)(a1 + 76) = v6;
  if ( v4[4] != -1 )
    v5 = v4[4];
  *(_DWORD *)(a1 + 80) = v5;
  result = (unsigned int)v4[5];
  if ( (_DWORD)result != -1 )
    v6 = result;
  *(_DWORD *)(a1 + 84) = v6;
  return result;
}

