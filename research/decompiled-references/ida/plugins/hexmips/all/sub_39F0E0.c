__int64 *__fastcall sub_39F0E0(__int64 *a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // [rsp+0h] [rbp-38h]

  if ( a3 && *a3 == 36 && (unsigned int)qsscanf() == 1 && v8 != -1 )
  {
    v3 = operator new(0x38u);
    v5 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)v3 = &off_4C73F0;
    *(_DWORD *)(v3 + 8) = 1;
    *(_QWORD *)(v3 + 16) = v5;
    *(_QWORD *)(v3 + 24) = 0;
    *(_DWORD *)(v3 + 48) = -1;
    *(_OWORD *)(v3 + 32) = 0;
    v6 = qvector_reserve();
    v7 = *(_QWORD *)(v3 + 32);
    *(_QWORD *)(v3 + 24) = v6;
    *(_QWORD *)(v6 + 8 * v7) = v8;
    ++*(_QWORD *)(v3 + 32);
  }
  else
  {
    v3 = 0;
  }
  *a1 = v3;
  return a1;
}

