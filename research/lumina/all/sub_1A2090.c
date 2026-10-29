__int64 __fastcall sub_1A2090(char *a1, unsigned __int8 a2, __int64 a3, unsigned __int64 a4, char *a5, int a6)
{
  __int64 v9; // rbx
  unsigned int v10; // ebp
  int v11; // eax
  int v12; // eax
  int v14; // edi
  pthread_mutex_t *v15; // rdi
  _QWORD v16[9]; // [rsp+0h] [rbp-48h] BYREF

  v16[3] = __readfsqword(0x28u);
  v16[0] = 0;
  sub_1A1C90((__int64)v16, a1, a5, a2);
  v9 = v16[0];
  v10 = sub_1A0FB0((__int64)v16, a3, a4, a6);
  sub_19ED80(v9);
  v11 = *(_DWORD *)(v9 + 5728);
  *(_QWORD *)(v9 + 5720) = 0;
  if ( v11 )
  {
    v12 = v11 - 1;
    *(_DWORD *)(v9 + 5728) = v12;
    if ( !v12 )
    {
      v14 = *(_DWORD *)(v9 + 5712);
      if ( v14 == -1 )
      {
        sub_19A570(*(pthread_mutex_t **)v9);
      }
      else
      {
        sub_1979E0(v14);
        v15 = *(pthread_mutex_t **)v9;
        *(_DWORD *)(v9 + 5712) = -1;
        sub_19A570(v15);
      }
    }
  }
  return v10;
}
