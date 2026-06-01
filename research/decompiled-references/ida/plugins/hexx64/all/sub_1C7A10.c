__int64 __fastcall sub_1C7A10(_DWORD *a1, unsigned int a2, unsigned int a3, _QWORD *a4, double a5)
{
  unsigned int v5; // r12d
  unsigned int tinfo_size; // ebp
  unsigned int v8; // ebx
  int v10; // edx
  int v11; // eax
  __int64 (__fastcall *v12)(__int64, unsigned int); // rax
  __int64 v13; // [rsp+0h] [rbp-68h] BYREF
  __int64 v14; // [rsp+8h] [rbp-60h]
  int v15; // [rsp+10h] [rbp-58h] BYREF
  __int16 v16; // [rsp+1Ah] [rbp-4Eh]
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v5 = a2;
  tinfo_size = a3;
  v17 = __readfsqword(0x28u);
  v13 = 3;
  v14 = a2;
  v8 = sub_1C7790((__int64)&v13, (__int64)a4, a3, a5);
  if ( (_BYTE)v8 )
  {
    if ( (_DWORD)v13 == 3 )
    {
      LOBYTE(v8) = (_DWORD)v14 == a2;
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  if ( a4 && (unsigned __int8)*a4 )
    tinfo_size = get_tinfo_size();
  v10 = sub_1338F0(a1, nullptr, a2, 0x7FFFFFFFu);
  v11 = a1[20];
  if ( (int)tinfo_size <= v11 )
    v11 = tinfo_size;
  if ( v11 > v10 )
    goto LABEL_3;
  v12 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 320LL);
  if ( v12 != sub_1C1D00 )
    v5 = ((__int64 (__fastcall *)(_DWORD *, _QWORD, _QWORD))v12)(a1, a2, tinfo_size);
  if ( v5 == -1 )
  {
LABEL_3:
    v8 = 0;
    goto LABEL_4;
  }
  sub_1C6F80(&v15, a1, (__int64)&v13, tinfo_size, 0, a5);
  if ( v15 )
  {
    v8 = 1;
    if ( v15 == 3 )
      LOBYTE(v8) = v16 == 0;
  }
  cleanup_argloc();
LABEL_4:
  cleanup_argloc();
  return v8;
}

