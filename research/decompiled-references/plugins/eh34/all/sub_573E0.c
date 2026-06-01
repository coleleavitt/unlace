_QWORD *__fastcall sub_573E0(__int64 *a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rax
  void (__fastcall *hexdsp)(__int64, _QWORD *, __int64 *); // rax

  v2 = (_QWORD *)operator new(0x28u);
  *v2 = 0;
  v3 = v2;
  v4 = *a1;
  v3[3] = 0;
  v3[1] = v4;
  LODWORD(v4) = *((_DWORD *)a1 + 2);
  v3[4] = 0;
  *((_DWORD *)v3 + 4) = v4;
  *((_BYTE *)v3 + 20) = *((_BYTE *)a1 + 12);
  hexdsp = (void (__fastcall *)(__int64, _QWORD *, __int64 *))get_hexdsp(40, a2);
  hexdsp(203, v3 + 3, a1 + 2);
  return v3;
}
