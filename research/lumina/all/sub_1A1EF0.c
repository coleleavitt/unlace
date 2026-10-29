__int64 __fastcall sub_1A1EF0(__int64 a1, char *a2, char *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // ebp
  int v5; // eax
  int v6; // eax
  int v8; // edi
  pthread_mutex_t *v9; // rdi
  _QWORD v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v10[3] = __readfsqword(0x28u);
  v10[0] = 0;
  sub_1A1C90((__int64)v10, a2, a3, 0);
  v3 = v10[0];
  v4 = sub_19FCC0((__int64)v10, a1);
  sub_19ED80(v3);
  v5 = *(_DWORD *)(v3 + 5728);
  *(_QWORD *)(v3 + 5720) = 0;
  if ( v5 )
  {
    v6 = v5 - 1;
    *(_DWORD *)(v3 + 5728) = v6;
    if ( !v6 )
    {
      v8 = *(_DWORD *)(v3 + 5712);
      if ( v8 == -1 )
      {
        sub_19A570(*(pthread_mutex_t **)v3);
      }
      else
      {
        sub_1979E0(v8);
        v9 = *(pthread_mutex_t **)v3;
        *(_DWORD *)(v3 + 5712) = -1;
        sub_19A570(v9);
      }
    }
  }
  return v4;
}
