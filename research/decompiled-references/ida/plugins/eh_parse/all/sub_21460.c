__int64 __fastcall sub_21460(__int64 a1, __int64 *a2, unsigned int *a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebp
  int v6; // edx
  __int64 v7; // rax
  size_t v9; // rax
  size_t v10; // rbp
  void *v11; // rdi
  size_t v12; // r13
  __int64 v13; // rax
  _QWORD v14[3]; // [rsp+0h] [rbp-78h] BYREF
  int v15; // [rsp+18h] [rbp-60h]
  char s[40]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( a2 )
  {
    v5 = *a3;
    if ( (*a3 & 3) != 0 )
      goto LABEL_9;
    v6 = 25;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 132LL) == 4 )
      v6 = 18;
    v7 = *(_QWORD *)(a1 + 32);
    v15 = v6;
    v14[0] = -1;
    v14[2] = 0;
    if ( v7 == -1 )
      v7 = 0;
    v14[1] = v7;
    if ( !(unsigned int)get_offset_expr(a2, a5, 0, v14, a5, v5, 0) )
    {
LABEL_9:
      btoa32(s, 32, v5, 0);
      v9 = strlen(s);
      v10 = v9;
      if ( v9 )
      {
        v11 = (void *)*a2;
        v12 = v9 + 1;
        if ( a2[2] < v9 + 1 )
        {
          v13 = qvector_reserve(a2, *a2, v9 + 1, 1);
          *a2 = v13;
          v11 = (void *)v13;
        }
        a2[1] = v12;
        memmove(v11, s, v10);
        *(_BYTE *)(*a2 + v10) = 0;
      }
      else
      {
        a2[1] = 0;
      }
    }
  }
  return 1;
}

