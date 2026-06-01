__int64 __fastcall sub_1EAB0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 result; // rax
  _QWORD *v7; // rdi

  if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 0 )
  {
    if ( a3 == 1 )
    {
      v7 = *(_QWORD **)(a1 + 168);
      if ( v7 == (_QWORD *)(*(_QWORD *)(a1 + 184) - 72LL) )
      {
        result = sub_1E980((_QWORD *)(a1 + 120));
      }
      else
      {
        v7[1] = -1;
        v7[2] = 0;
        *v7 = 0xFFFFFFFFLL;
        result = copy_debug_event();
        *(_QWORD *)(a1 + 168) += 72LL;
      }
    }
    else
    {
      v4 = *(_QWORD *)(a1 + 136);
      if ( v4 == *(_QWORD *)(a1 + 144) )
      {
        result = sub_1D6F0((_QWORD *)(a1 + 120));
      }
      else
      {
        *(_BYTE *)(v4 - 56) = 0;
        v5 = v4 - 72;
        *(_QWORD *)(v5 + 8) = -1;
        *(_QWORD *)v5 = 0xFFFFFFFFLL;
        *(_DWORD *)(v5 + 20) = 0;
        result = copy_debug_event();
        *(_QWORD *)(a1 + 136) -= 72LL;
      }
    }
    *(_BYTE *)(a1 + 1412) = 0;
  }
  return result;
}

