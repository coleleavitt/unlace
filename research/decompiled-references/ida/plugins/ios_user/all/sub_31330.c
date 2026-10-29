__int64 __fastcall sub_31330(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, int a5)
{
  __int64 v8; // rdi
  __int64 v10; // rdx
  __int64 result; // rax
  unsigned int v12; // eax
  __int64 v13; // rbx
  unsigned int v14; // r15d
  __int64 v15; // rdi
  __int64 *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rax
  _DWORD v19[2]; // [rsp+8h] [rbp-90h] BYREF
  _BYTE v20[8]; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v21; // [rsp+18h] [rbp-80h]
  _DWORD v22[4]; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v23; // [rsp+40h] [rbp-58h]
  unsigned __int64 v24; // [rsp+58h] [rbp-40h]

  v8 = *(_QWORD *)(a1 + 8);
  v24 = __readfsqword(0x28u);
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, __int64, _QWORD))(*(_QWORD *)v8 + 288LL))(
          v8,
          a2,
          v22,
          32,
          0);
  result = 0;
  if ( v10 == 32 && v22[0] == a5 && v22[3] == 7 )
  {
    if ( a3 )
    {
      v12 = v23;
      *a3 = 0;
      v13 = a2 + 32;
      if ( v12 )
      {
        v14 = 0;
        while ( 1 )
        {
          v15 = *(_QWORD *)(a1 + 8);
          v19[0] = 0;
          (*(void (__fastcall **)(__int64, __int64, _DWORD *, __int64, _QWORD))(*(_QWORD *)v15 + 288LL))(
            v15,
            v13,
            v19,
            8,
            0);
          if ( v19[0] == 13 )
          {
            v16 = *(__int64 **)(a1 + 8);
            v17 = 24;
            v18 = *v16;
            goto LABEL_12;
          }
          if ( v19[0] == 15 )
            break;
          ++v14;
          v13 += v19[1];
          if ( v14 >= v23 )
            return 1;
        }
        v16 = *(__int64 **)(a1 + 8);
        v17 = 12;
        v18 = *v16;
LABEL_12:
        (*(void (__fastcall **)(__int64 *, __int64, _BYTE *, __int64, _QWORD))(v18 + 288))(v16, v13, v20, v17, 0);
        (*(void (__fastcall **)(_QWORD, __int64, _BYTE *, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
          *(_QWORD *)(a1 + 8),
          v13 + v21,
          a3,
          a4,
          0);
      }
    }
    return 1;
  }
  return result;
}

