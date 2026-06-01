__int64 __fastcall sub_3B670(unsigned __int8 *a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rbp
  void (__fastcall *hexdsp)(__int64, _BYTE *, __int64); // rax
  _BYTE *v10; // rdi
  unsigned int v11; // ebp
  __int64 v12; // rbp
  void (__fastcall *v13)(__int64, _BYTE *, __int64); // rax
  void (__fastcall *v14)(__int64, _BYTE *); // rax
  void (__fastcall *v15)(__int64, _BYTE *); // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  _BYTE v19[16]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v20[24]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-30h]

  v6 = *a1;
  v21 = __readfsqword(0x28u);
  v7 = v6 & 0xFFFFFFFB;
  if ( (v6 & 0xFB) == 1 )
    goto LABEL_9;
  if ( (_BYTE)v6 != 4 )
    return 0;
  v7 = *((_QWORD *)a1 + 1);
  if ( *(_DWORD *)v7 == 5 )
  {
LABEL_9:
    v17 = sub_3B5B0((__int64)a2, (__int64)a1, v7, a4, a5);
    if ( v18 )
      sub_32990((__int64)a2, v17, v18, (__int64)a1);
    return 1;
  }
  else
  {
    v8 = v7 + 32;
    hexdsp = (void (__fastcall *)(__int64, _BYTE *, __int64))get_hexdsp(a1, a2);
    hexdsp(273, v19, v8);
    v10 = v19;
    v11 = sub_3B670(v19, a2);
    if ( (_BYTE)v11 )
    {
      v12 = *((_QWORD *)a1 + 1) + 48LL;
      v13 = (void (__fastcall *)(__int64, _BYTE *, __int64))get_hexdsp(v19, a2);
      v13(273, v20, v12);
      v11 = sub_3B670(v20, a2);
      v14 = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(v20, a2);
      a2 = v20;
      v10 = (_BYTE *)(&qword_110 + 4);
      v14(276, v20);
    }
    v15 = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(v10, a2);
    v15(276, v19);
  }
  return v11;
}

