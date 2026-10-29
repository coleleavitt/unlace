__int64 __fastcall sub_31AD0(__int64 a1, unsigned __int16 a2, _QWORD *a3)
{
  _QWORD *v4; // rax
  unsigned int v6; // edx

  v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2768) + 80LL))(*(_QWORD *)(a1 + 2768));
  if ( v4 && v4[1] >= (unsigned __int64)(a2 >> 3) )
  {
    v6 = *(unsigned __int16 *)(*v4 + 8LL * (a2 >> 3) + 2)
       | __ROR4__(_byteswap_ulong(*(_DWORD *)(*v4 + 8LL * (a2 >> 3) + 4)) & 0xFF0000FF, 8);
    *a3 = v6;
    return 1;
  }
  else
  {
    *a3 = 0;
    return 1;
  }
}

