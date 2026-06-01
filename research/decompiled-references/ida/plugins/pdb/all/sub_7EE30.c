__int64 __fastcall sub_7EE30(__int64 *a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  unsigned int v6; // edx
  unsigned __int32 v7; // edx

  result = a2;
  v5 = *a1;
  *(_BYTE *)(result + 8) = 0;
  *(_QWORD *)result = v5;
  v6 = *((_DWORD *)a1 + 2);
  if ( a3 )
  {
    *(_QWORD *)(result + 16) = _byteswap_ulong(v6);
    *(_QWORD *)(result + 24) = _byteswap_ulong(*((_DWORD *)a1 + 3));
    *(_QWORD *)(result + 32) = _byteswap_ulong(*((_DWORD *)a1 + 4));
    *(_QWORD *)(result + 40) = _byteswap_ulong(*((_DWORD *)a1 + 5));
    *(_QWORD *)(result + 48) = _byteswap_ulong(*((_DWORD *)a1 + 6));
    *(_QWORD *)(result + 56) = _byteswap_ulong(*((_DWORD *)a1 + 7));
    *(_DWORD *)(result + 64) = (unsigned __int16)__ROL2__(*((_WORD *)a1 + 16), 8);
    *(_DWORD *)(result + 68) = (unsigned __int16)__ROL2__(*((_WORD *)a1 + 17), 8);
    v7 = _byteswap_ulong(*((_DWORD *)a1 + 9));
  }
  else
  {
    *(_QWORD *)(result + 16) = v6;
    *(_QWORD *)(result + 24) = *((unsigned int *)a1 + 3);
    *(_QWORD *)(result + 32) = *((unsigned int *)a1 + 4);
    *(_QWORD *)(result + 40) = *((unsigned int *)a1 + 5);
    *(_QWORD *)(result + 48) = *((unsigned int *)a1 + 6);
    *(_QWORD *)(result + 56) = *((unsigned int *)a1 + 7);
    *(_DWORD *)(result + 64) = *((unsigned __int16 *)a1 + 16);
    *(_DWORD *)(result + 68) = *((unsigned __int16 *)a1 + 17);
    v7 = *((_DWORD *)a1 + 9);
  }
  *(_DWORD *)(result + 72) = v7;
  return result;
}

